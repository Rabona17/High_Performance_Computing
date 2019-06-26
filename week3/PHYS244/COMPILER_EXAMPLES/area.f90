program circle
real*8  :: r, area, pi
!This program reads a real number r and prints
!the area of a circle with radius r
write(*,*)"Input Radius"
read(*,*)r
pi = 4d0 * atan(1.0d0)
area = pi*r*r
write(*,*)'Area = ',area
stop
end program circle
