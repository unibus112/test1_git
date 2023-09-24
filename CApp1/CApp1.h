#pragma once

int main()
{
    test1();
    cout << "Hello World!\n";
    int a = 3;
    int& ra = a;

    cout << "a = " << a << ", ra = " << ra << endl;
    ra++;
    cout << "a = " << a << ", ra = " << ra << endl;
    cout << "a = " << &a << ", ra = " << &ra << endl;
    cout << (&a == &ra) << endl;

    int b = a;
    cout << "a = " << a << ", b = " << b << endl;
    b++;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a = " << &a << ", b = " << &b << endl;

}

void test1();
