#include "13.34.h"
#include <iostream>

void swap(Message &lhs, Message &rhs)
{
    using std::swap;
    lhs.remove_from_Folders();
    rhs.remove_from_Folders();

    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);

    lhs.add_to_Folders(lhs);
    rhs.add_to_Folders(rhs);
}

void Message::save(Folder &f)
{
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f)
{
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message &m)
{
    for (auto f : m.folders)
        f->addMsg(this);
}

void Message::remove_from_Folders()
{
    for (auto f : folders)
        f->remMsg(this);
}

Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);
}

Message::~Message()
{
    remove_from_Folders();
}

Message& Message::operator=(const Message &rhs)
{
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

void Message::print_debug()
{
    std::cout << contents << std::endl;
}

void swap(Folder &lhs, Folder &rhs)
{
    using std::swap;
    lhs.remove_from_Message();
    rhs.remove_from_Message();

    swap(lhs.msgs, rhs.msgs);

    lhs.add_to_Message(lhs);
    rhs.add_to_Message(rhs);
}

void Folder::add_to_Message(const Folder &f)
{
    for (auto m : f.msgs)
        m->folders.insert(this);
}

void Folder::remove_from_Message()
{
    for (auto m : msgs)
        m->folders.erase(this);
}

Folder::Folder(const Folder &f) : msgs(f.msgs)
{
    add_to_Message(f);
}

Folder::~Folder()
{
    remove_from_Message();
}

Folder& Folder::operator=(const Folder &rhs)
{
    remove_from_Message();
    msgs = rhs.msgs;
    add_to_Message(rhs);
    return *this;
}

void Folder::print_debug()
{
    for (auto m : msgs)
        std::cout << m->contents << " ";
    std::cout << std::endl;
}

int main()
{
    Message m1("AAA");
    Message m2("BBB");
    Message m3("CCC");
    Message m4("DDD");
    Folder f1;
    Folder f2;
    m1.save(f1);
    m2.save(f2);
    f1.print_debug();
    std::cout << std::endl;
    f2.print_debug();

    m3.save(f1);
    m4.save(f1);
    f1.print_debug();
    std::cout << std::endl;
    f2.print_debug();

    swap(f1, f2);


    f1.print_debug();
    std::cout << std::endl;
    f2.print_debug();
    return 0;
}

