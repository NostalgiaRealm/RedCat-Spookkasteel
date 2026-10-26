/*
 * FUN_004d30f0 at 004d30f0
 * undefined FUN_004d30f0(void)
 * Address ranges: 004d30f0-004d313a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d30f0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(int *)(param_1 + 0x168) + 0x30);
  if (pcVar3 != (char *)0x0) {
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      iVar2 = FUN_0060a6f2(param_2,0,&CAdamGO::RTTI_Type_Descriptor,
                           &CAdamPlayer::RTTI_Type_Descriptor,0);
      if (iVar2 != 0) {
        FUN_00505400(&DAT_006b9660);
      }
    }
  }
  return;
}

