/*
 * FUN_005be960 at 005be960
 * undefined FUN_005be960(void)
 * Address ranges: 005be960-005be9de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __fastcall
FUN_005be960(undefined4 param_1,char *param_2,undefined2 param_3,undefined2 param_4,
            undefined4 param_5)

{
  char *_Dest;
  char *pcVar1;
  int iVar2;
  
  _Dest = (char *)FUN_005cf3b0(0x2058);
  iVar2 = 0x100;
  _Dest[0x44] = '\0';
  _Dest[0x45] = '\0';
  _Dest[0x46] = '\0';
  _Dest[0x47] = '\0';
  pcVar1 = _Dest + 0x48;
  do {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _strncpy(_Dest,param_2,0x40);
  *(undefined2 *)(_Dest + 0x40) = param_3;
  _Dest[0x3f] = '\0';
  *(undefined2 *)(_Dest + 0x42) = param_4;
  *(undefined4 *)(_Dest + 0x2048) = param_1;
  _Dest[0x204c] = '\0';
  _Dest[0x204d] = '\0';
  _Dest[0x204e] = '\0';
  _Dest[0x204f] = '\0';
  _Dest[0x2054] = '\x01';
  _Dest[0x2055] = '\0';
  _Dest[0x2056] = '\0';
  _Dest[0x2057] = '\0';
  *(undefined4 *)(_Dest + 0x2050) = param_5;
  return _Dest;
}

