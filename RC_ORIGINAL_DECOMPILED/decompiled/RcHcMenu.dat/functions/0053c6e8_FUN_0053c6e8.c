/*
 * FUN_0053c6e8 at 0053c6e8
 * undefined1 __register FUN_0053c6e8(int * param_1, int * param_2, char param_3)
 * Address ranges: 0053c6e8-0053c7d4;0053c7dc-0053c7e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0053c6e8(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_e;
  char local_d;
  int *local_c;
  int *local_8;
  
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0x22] == 0) {
    puStack_14 = (undefined1 *)0x53c717;
    FUN_00403d94("Assertion failure");
  }
  if (local_d == '\0') {
    puStack_14 = (undefined1 *)0x53c725;
    FUN_0053d2c0(local_8);
  }
  local_e = 0;
  puStack_14 = (undefined1 *)0x53c737;
  cVar1 = (**(code **)(*(int *)local_8[0x22] + 0x3c))();
  if (cVar1 == '\0') {
    return local_e;
  }
  puStack_18 = &LAB_0053c7d5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  piVar3 = (int *)FUN_0053d8a4((int)local_8);
  cVar1 = FUN_00494528(piVar3,local_c);
  if (cVar1 == '\0') {
    uVar2 = 8;
    piVar3 = (int *)FUN_0053d8a4((int)local_8);
    iVar4 = FUN_00494814(local_c,piVar3,local_8[0xf],uVar2);
    if (iVar4 < 0) {
      FUN_0053c5e0(local_c,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
    }
    else {
      uVar2 = 8;
      piVar3 = (int *)FUN_0053d8a4((int)local_8);
      iVar4 = FUN_00494814(local_c,piVar3,local_8[0xf],uVar2);
      if (0 < iVar4) {
        FUN_0053c514(local_c,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
      }
    }
  }
  *in_FS_OFFSET = uStack_1c;
  return 0;
}

