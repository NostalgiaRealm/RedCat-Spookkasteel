/*
 * FUN_0045130c at 0045130c
 * undefined __register FUN_0045130c(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 0045130c-00451349;00451360-00451388
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045130c(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x45131f;
  piVar1 = (int *)(**(code **)(param_2 + -0xc))();
  *param_3 = piVar1;
  puStack_1c = &LAB_0045134a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xffffffff,param_1);
  *in_FS_OFFSET = uStack_20;
  if (*(int *)(param_1 + 0x38) == 0) {
    puStack_18 = (undefined1 *)0x451373;
    uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_00446f0c);
    if ((char)uVar2 != '\0') {
      puStack_18 = (undefined1 *)0x451380;
      FUN_00438964(piVar1);
      *(int **)(param_1 + 0x38) = piVar1;
    }
  }
  return;
}

