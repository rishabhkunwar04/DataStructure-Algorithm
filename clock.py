import time
import turtle
wn= turtle.screen()
wn.bgcolor("black")
wn.setup(width=600,height=600)
wn.title("Analog clock by DEVIL")

# Create our drawing pen
pen= turtle.turtle()
pen.hideturtle()
pen.speed(0)
pen.pensize(3)


def draw_clock(h,m,s,pen):
    
    #draw clock face
    pen.up()
    pen.goto(0,210)
    pen.setheading(180)
    pen.color("green")
    pen.pendown()
    pen.circle(210)

    #draw the line for hours
    pen.penup()
    pen.goto(0,0)
    pen.setheading(90)

    for _ in range (12):
        pen.fd(190)
        pen.pendown()
        pen.fd(20)
        pen.penup()
        pen.goto(0,0)
        pen.rt(30)
 #draw the hour hand    

 pen.penup()
 pen.goto(0,0)
 pen.color("white")
 pen.setheading(90)
 angle = (h/12)*360
 pen.rt(angle)
 pen.pendown()
 pen.fd(100) 
 
 #draw the minute hand
 pen.penup()
 pen.goto(0,0)
 pen.color("blue")
 pen.setheading(90)
 angle = (h/12)*360
 pen.rt(angle)
 pen.pendown()
 pen.fd(100)
 # draw the second hand 
 pen.penup()
 pen.goto(0,0)
 pen.color("gold")
 pen.setheading(90)
 angle = (s/12)*360
 pen.rt(angle)
 pen.pendown()
 pen.fd(100)

while True:
    h=int(time.strftime("%I"))
    m=int(time.strftime("%M"))
    s=int(time.strftime("%S"))

    draw_clock(h,m,s,pen)
    wn.update()
    time.sleep(1)
    pen.clear()



wn.mainloop()