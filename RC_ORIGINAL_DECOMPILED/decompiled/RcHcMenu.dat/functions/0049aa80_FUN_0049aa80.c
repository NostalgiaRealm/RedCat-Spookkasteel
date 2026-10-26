/*
 * FUN_0049aa80 at 0049aa80
 * undefined __register FUN_0049aa80(int * param_1, byte param_2, undefined4 param_3)
 * Address ranges: 0049aa80-0049ab06;0049ab1e-0049ab44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049aa80(int *param_1,byte param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (((1 < *(int *)(param_1[9] + 4)) || (*(char *)(param_1[9] + 0x41c) != '\0')) ||
     ((param_2 == 0 && (*(char *)(param_1[9] + 0x42c) != '\0')))) {
    puStack_20 = (undefined1 *)0x49aacf;
    piVar1 = FUN_004990a4((int *)&PTR_FUN_004988dc,'\x01',param_3);
    puStack_24 = &LAB_0049ab07;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_00499ba4(piVar1,param_1[9],
                 CONCAT31((int3)((uint)extraout_ECX >> 8),*(byte *)(param_1[9] + 0x42c) & param_2));
    *in_FS_OFFSET = uStack_28;
    *(undefined1 *)(piVar1 + 0x10b) = 1;
    puStack_20 = (undefined1 *)0x49ab33;
    FUN_0049b6c0((int)param_1,(int)piVar1);
    puStack_20 = (undefined1 *)0x49ab3e;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

