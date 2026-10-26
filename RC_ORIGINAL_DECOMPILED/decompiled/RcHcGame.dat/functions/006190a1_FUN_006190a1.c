/*
 * FUN_006190a1 at 006190a1
 * undefined FUN_006190a1(void)
 * Address ranges: 006190a1-006192fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006190a1(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  char *_Source;
  int local_4;
  
  DAT_00710080 = 0;
  DAT_006b3068 = 0xffffffff;
  DAT_006b3058 = 0xffffffff;
  _Str1 = (char *)FUN_0061d924(&DAT_00652808);
  if (_Str1 == (char *)0x0) {
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00710088);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_006b2fc4 = DAT_00710088 * 0x3c;
    DAT_00710080 = 1;
    if (DAT_007100ce != 0) {
      DAT_006b2fc4 = DAT_006b2fc4 + DAT_007100dc * 0x3c;
    }
    if ((DAT_00710122 == 0) || (DAT_00710130 == 0)) {
      DAT_006b2fc8 = 0;
      DAT_006b2fcc = 0;
    }
    else {
      DAT_006b2fc8 = 1;
      DAT_006b2fcc = (DAT_00710130 - DAT_007100dc) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_0070fffc,0x220,(LPCWSTR)&DAT_0071008c,-1,PTR_DAT_006b3050,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 == 0) || (local_4 != 0)) {
      *PTR_DAT_006b3050 = 0;
    }
    else {
      PTR_DAT_006b3050[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_0070fffc,0x220,(LPCWSTR)&DAT_007100e0,-1,PTR_DAT_006b3054,0x3f,
                                (LPCSTR)0x0,&local_4);
    if ((iVar4 != 0) && (local_4 == 0)) {
      PTR_DAT_006b3054[0x3f] = 0;
      return;
    }
  }
  else {
    if (*_Str1 == '\0') {
      return;
    }
    if ((DAT_00710134 != (char *)0x0) && (iVar4 = _strcmp(_Str1,DAT_00710134), iVar4 == 0)) {
      return;
    }
    FUN_0060b25d(DAT_00710134);
    sVar5 = _strlen(_Str1);
    DAT_00710134 = _malloc(sVar5 + 1);
    if (DAT_00710134 == (char *)0x0) {
      return;
    }
    FUN_00611110(DAT_00710134,_Str1);
    _strncpy(PTR_DAT_006b3050,_Str1,3);
    _Source = _Str1 + 3;
    PTR_DAT_006b3050[3] = 0;
    cVar1 = *_Source;
    if (cVar1 == '-') {
      _Source = _Str1 + 4;
    }
    iVar4 = FUN_0060ae85(_Source);
    DAT_006b2fc4 = iVar4 * 0xe10;
    for (; (cVar2 = *_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        _Source = _Source + 1) {
    }
    if (*_Source == ':') {
      _Source = _Source + 1;
      iVar4 = FUN_0060ae85(_Source);
      DAT_006b2fc4 = DAT_006b2fc4 + iVar4 * 0x3c;
      for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
      }
      if (*_Source == ':') {
        _Source = _Source + 1;
        iVar4 = FUN_0060ae85(_Source);
        DAT_006b2fc4 = DAT_006b2fc4 + iVar4;
        for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      DAT_006b2fc4 = -DAT_006b2fc4;
    }
    DAT_006b2fc8 = (int)*_Source;
    if (DAT_006b2fc8 != 0) {
      _strncpy(PTR_DAT_006b3054,_Source,3);
      PTR_DAT_006b3054[3] = 0;
      return;
    }
  }
  *PTR_DAT_006b3054 = 0;
  return;
}

