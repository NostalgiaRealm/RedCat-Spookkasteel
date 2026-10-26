/*
 * FUN_0054e060 at 0054e060
 * undefined FUN_0054e060(void)
 * Address ranges: 0054e060-0054e117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0054e060(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a1798,200);
  local_4 = 0;
  iVar1 = FUN_00516fb0();
  iVar3 = *(int *)(iVar1 + 100);
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(iVar1 + 0x18);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(iVar1 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    FUN_005afe30(s_CAdamSoundSystem__RemoveUnusedSo_006a1a58);
  }
  FUN_00550330(0);
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_005c7ed0(*(int *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

