/*
 * ~time_put<> at 006080b7
 * undefined ~time_put<>(void)
 * Address ranges: 006080b7-006080d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Multiple Matches With Same Base Name  protected: virtual __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >::~time_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> > >(void)  protected: virtual __thiscall std::time_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::~time_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >(void)  protected: virtual __thiscall std::time_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::~time_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(void)  Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::~time_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >(void)
    protected: virtual __thiscall std::time_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::~time_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(void)
    protected: virtual __thiscall std::time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::~time_put<wchar_t,class
   std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __fastcall ~time_put<>(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_006519cc;
  FUN_0060b25d(param_1[2]);
  *param_1 = &PTR_FUN_006514cc;
  return;
}

