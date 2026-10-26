/*
 * FUN_0060b060 at 0060b060
 * undefined FUN_0060b060(void)
 * Address ranges: 0060b060-0060b0c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_0060b060(int param_1)

{
  char *_Str;
  size_t sVar1;
  char *pcVar2;
  void *pvVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    _Str = (char *)FUN_00611200(0,param_1 + 9,0,_malloc,FUN_0060b25d,0x2800);
    sVar1 = _strlen(_Str);
    for (pcVar2 = _Str + (sVar1 - 1); *pcVar2 == ' '; pcVar2 = pcVar2 + -1) {
      *pcVar2 = '\0';
    }
    sVar1 = _strlen(_Str);
    pvVar3 = _malloc(sVar1 + 1);
    *(void **)(param_1 + 4) = pvVar3;
    FUN_00611110(pvVar3,_Str);
    FUN_0060b25d(_Str);
  }
  return *(undefined4 *)(param_1 + 4);
}

