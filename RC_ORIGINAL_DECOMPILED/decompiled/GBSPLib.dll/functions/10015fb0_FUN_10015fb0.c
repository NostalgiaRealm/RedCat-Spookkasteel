/*
 * FUN_10015fb0 at 10015fb0
 * undefined FUN_10015fb0(void)
 * Address ranges: 10015fb0-100160fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10015fb0(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4,char *param_5,
                 char *param_6)

{
  char *_Dest;
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  char local_14 [20];
  
  if (0x1d < DAT_1003a6d8) {
    FUN_10029010(&DAT_1003a6e0,&DAT_1003a7e8,DAT_1003a6dc * 0x108 + -0x108);
    DAT_1003a6d8 = DAT_1003a6dc + -1;
  }
  _Dest = &DAT_1003a6e4 + DAT_1003a6d8 * 0x108;
  if (param_2 != (char *)0x0) {
    _strncpy(_Dest,param_2,0x80);
  }
  _strncat(_Dest,&DAT_1003c5d0,0x80);
  if (param_3 != (char *)0x0) {
    pcVar1 = _strrchr(param_3,0x5c);
    if (pcVar1 != (char *)0x0) {
      param_3 = pcVar1 + 1;
    }
    _strncat(_Dest,param_3,0x80);
    _strncat(_Dest,&DAT_1003c5d0,0x80);
  }
  FUN_1003322b(param_4,local_14,10);
  _strncat(_Dest,local_14,0x80);
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    _strncat(_Dest,&DAT_1003c5d0,0x80);
    _strncat(_Dest,param_5,0x80);
  }
  puVar3 = (undefined4 *)(DAT_1003a6d8 * 0x108 + 0x1003a765);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((param_6 != (char *)0x0) && (*param_6 != '\0')) {
    _strncat(_Dest,param_6,0x80);
  }
  DAT_1003a6d8 = DAT_1003a6d8 + 1;
  return;
}

