/*
 * FUN_005cf220 at 005cf220
 * undefined FUN_005cf220(void)
 * Address ranges: 005cf220-005cf36c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005cf220(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4,char *param_5,
                 char *param_6)

{
  char *_Dest;
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  char local_14 [20];
  
  if (0x1d < DAT_006aa560) {
    FUN_0060ab50(&DAT_006aa568,&DAT_006aa670,DAT_006aa564 * 0x108 + -0x108);
    DAT_006aa560 = DAT_006aa564 + -1;
  }
  _Dest = (char *)(DAT_006aa560 * 0x108 + 0x6aa56c);
  if (param_2 != (char *)0x0) {
    _strncpy(_Dest,param_2,0x80);
  }
  _strncat(_Dest,(char *)&DAT_00693460,0x80);
  if (param_3 != (char *)0x0) {
    pcVar1 = _strrchr(param_3,0x5c);
    if (pcVar1 != (char *)0x0) {
      param_3 = pcVar1 + 1;
    }
    _strncat(_Dest,param_3,0x80);
    _strncat(_Dest,(char *)&DAT_00693460,0x80);
  }
  FUN_0061dc9e(param_4,local_14,10);
  _strncat(_Dest,local_14,0x80);
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    _strncat(_Dest,(char *)&DAT_00693460,0x80);
    _strncat(_Dest,param_5,0x80);
  }
  puVar3 = (undefined4 *)(DAT_006aa560 * 0x108 + 0x6aa5ed);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if ((param_6 != (char *)0x0) && (*param_6 != '\0')) {
    _strncat(_Dest,param_6,0x80);
  }
  DAT_006aa560 = DAT_006aa560 + 1;
  return;
}

