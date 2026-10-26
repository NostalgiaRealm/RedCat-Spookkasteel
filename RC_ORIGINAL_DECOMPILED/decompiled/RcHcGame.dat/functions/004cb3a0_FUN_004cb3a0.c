/*
 * FUN_004cb3a0 at 004cb3a0
 * undefined FUN_004cb3a0(void)
 * Address ranges: 004cb3a0-004cb3e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004cb3a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x16f) != '\0') {
    iVar1 = FUN_0060a6f2(param_2,0,&CAdamGO::RTTI_Type_Descriptor,&CAdamPlayer::RTTI_Type_Descriptor
                         ,0);
    if ((iVar1 != 0) && ((*(int *)(param_1 + 0x168) == 1 || (*(int *)(param_1 + 0x168) == 5)))) {
      FUN_004cb110();
    }
  }
  return;
}

