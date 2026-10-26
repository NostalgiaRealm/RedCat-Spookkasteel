/*
 * FUN_0046cd6c at 0046cd6c
 * uint __register FUN_0046cd6c(int * param_1)
 * Address ranges: 0046cd6c-0046cdc3;0046cdcb-0046cddc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 31 for TBlobField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 31 for
   TBlobField. Original bytes unchanged; names and types still inferred. */

uint FUN_0046cd6c(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46cd7c;
  uVar1 = FUN_0046cde0((int)param_1);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x46cd8f;
    piVar2 = (int *)(**(code **)(*(int *)param_1[10] + 0x210))((int *)param_1[10],param_1,0);
    puStack_18 = &LAB_0046cdc4;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    FUN_004147cc(piVar2);
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x46cdd5;
    puStack_18 = (undefined1 *)0x46cdc3;
    uVar3 = FUN_00403094(piVar2);
    return uVar3;
  }
  puStack_14 = (undefined1 *)0x46cdd2;
  uVar3 = FUN_00469444(param_1,extraout_EDX,extraout_ECX);
  return uVar3;
}

