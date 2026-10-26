/*
 * FUN_0046a6e0 at 0046a6e0
 * undefined __register FUN_0046a6e0(undefined4 param_1, undefined * param_2)
 * Address ranges: 0046a6e0-0046a74c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 40 for TStringField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463020 slot 40 for
   TStringField. Original bytes unchanged; names and types still inferred. */

void FUN_0046a6e0(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int *in_stack_00000ff4;
  char acStack_100c [4096];
  int local_c;
  
  iVar1 = 2;
  do {
    local_c = iVar1;
    iVar1 = local_c + -1;
  } while (local_c + -1 != 0);
  iVar1 = (**(code **)(*in_stack_00000ff4 + 0x80))();
  pcVar2 = FUN_004041f4(param_2);
  FUN_0040a198(acStack_100c,pcVar2,iVar1);
  uVar3 = extraout_ECX;
  if (*(char *)((int)in_stack_00000ff4 + 0xd1) != '\0') {
    (**(code **)(*(int *)in_stack_00000ff4[10] + 0x248))
              ((int *)in_stack_00000ff4[10],acStack_100c,acStack_100c,1);
    uVar3 = extraout_ECX_00;
  }
  FUN_00469acc((int)in_stack_00000ff4,acStack_100c,CONCAT31((int3)((uint)uVar3 >> 8),1));
  return;
}

