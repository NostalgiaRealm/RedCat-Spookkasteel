/*
 * FUN_0041ef20 at 0041ef20
 * undefined __register FUN_0041ef20(int * param_1, undefined4 * param_2)
 * Address ranges: 0041ef20-0041efaf;0041efc7-0041efcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ef20(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  int *piStack_18;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    piStack_18 = (int *)0x41ef3b;
    iVar1 = FUN_00402fdc(param_2);
    piStack_18 = (int *)0x41ef40;
    local_8 = (int *)(**(code **)(iVar1 + 0xc))(iVar1,1);
    piStack_18 = (int *)0x41ef4d;
    (**(code **)(*local_8 + 8))(local_8,param_2);
    local_8[3] = (int)param_1;
    puStack_1c = (undefined1 *)0x41ef5f;
    piStack_18 = local_8;
    iVar1 = FUN_00403288(param_1,CONCAT22(extraout_var,0xfffd));
    piStack_18[2] = iVar1;
    local_8[5] = (int)param_1;
    puStack_1c = (undefined1 *)0x41ef77;
    piStack_18 = local_8;
    iVar1 = FUN_00403288(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),0xfffc));
    piStack_18[4] = iVar1;
  }
  puStack_1c = &LAB_0041efb0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  piStack_18 = (int *)&stack0xfffffffc;
  FUN_00403094((int *)param_1[1]);
  param_1[1] = (int)local_8;
  FUN_00403270(param_1,param_1,extraout_ECX);
  *in_FS_OFFSET = uStack_20;
  return;
}

