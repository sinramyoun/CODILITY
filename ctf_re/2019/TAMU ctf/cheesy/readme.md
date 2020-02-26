  v12 = __readfsqword(0x28u);
  std::operator<<<std::char_traits<char>>(&std::cout, "QUFBQUFBQUFBQUFBQUFBQQ==\n", envp);
  std::operator<<<std::char_traits<char>>(&std::cout, "Hello! I bet you are looking for the flag..\n", v3);
  std::operator<<<std::char_traits<char>>(
    &std::cout,
    "I really like basic encoding.. can you tell what kind I used??\n",
    v4);
  std::operator<<<std::char_traits<char>>(&std::cout, "RkxBR2ZsYWdGTEFHZmxhZ0ZMQUdmbGFn\n", v5);
  std::operator<<<std::char_traits<char>>(&std::cout, "Q2FuIHlvdSByZWNvZ25pemUgYmFzZTY0Pz8=\n", v6);
  std::operator<<<std::char_traits<char>>(&std::cout, "RkxBR2ZsYWdGTEFHZmxhZ0ZMQUdmbGFn\n", v7);
  std::allocator<char>::allocator(&v10);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(
    &v11,
    "Z2lnZW17M2E1eV9SM3YzcjUxTjYhfQ==\n",
    &v10);
  std::allocator<char>::~allocator(&v10);
  std::operator<<<std::char_traits<char>>(&std::cout, "WW91IGp1c3QgbWlzc2VkIHRoZSBmbGFn\n", v8);
  std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::~basic_string(&v11);
  return 0;
}

------------------------------------------------------

IDA로 열었을때 다음과 같이 hex ray 가 디컴파일 해주는데 
보면 
QUFBQUFBQUFBQUFBQUFBQQ==
==로 끝나는 base64 인코딩 형식이 보이고 디코딩 해 보면
AAAAAAAAAAAAAAAA
가 나오는것을 확인 할 수 있습니다.
해서 다른것도 디코딩을 해보면 
아래쪽에 있는
Z2lnZW17M2E1eV9SM3YzcjUxTjYhfQ==
이 base64 형식이
gigem{3a5y_R3v3r51N6!}로 디코딩 되는것을 확인 할 수 있습니다.