#include&lt;iostream&gt;
using namespace std;
inline void displayWelcomeMessage()
{
cout&lt;&lt;&quot;Welcome&quot;&lt;&lt;endl;
}
class Box
{
public:
float l,b,h;
void areaofbox(float l,float b,float h)
{
float area=2*(l*b+b*h+h*l);
cout&lt;&lt;&quot;Area of box is : &quot;&lt;&lt;area&lt;&lt;endl;
}
friend void displayBoxDimensions(Box);
void volumeofbox(float l,float b,float h);
};
void Box :: volumeofbox(float l,float b,float h)
{
float volume=l*b*h;
cout&lt;&lt;&quot;Volume of box is : &quot;&lt;&lt;volume&lt;&lt;endl;
}
void displayBoxDimensions(Box obj)
{
cout&lt;&lt;&quot;length =&quot;&lt;&lt;obj.l&lt;&lt;endl;
cout&lt;&lt;&quot;breadth =&quot;&lt;&lt;obj.b&lt;&lt;endl;
cout&lt;&lt;&quot;Width=&quot;&lt;&lt;obj.h&lt;&lt;endl;
}
int main()
{
Box cuboid;
cout&lt;&lt;&quot;enter length,breadth and width of the cuboid : &quot;&lt;&lt;endl;
cin&gt;&gt;cuboid.l&gt;&gt;cuboid.b&gt;&gt;cuboid.h;
displayWelcomeMessage();
displayBoxDimensions(cuboid);
cuboid.volumeofbox(cuboid.l,cuboid.b,cuboid.h);
