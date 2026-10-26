/*
 * FUN_0043f308 at 0043f308
 * undefined1 __register FUN_0043f308(int * param_1, int * param_2)
 * Address ranges: 0043f308-0043f3c6;0043f3eb-0043f3f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0043f308(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  undefined4 extraout_ECX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x43f320;
    iVar2 = FUN_0043e8ec(param_1);
    puStack_20 = (undefined1 *)0x43f329;
    iVar3 = FUN_0043e8ec(param_2);
    if (iVar2 == iVar3) {
      puStack_20 = (undefined1 *)0x43f33d;
      iVar2 = FUN_0043e8ec(param_1);
      uVar6 = extraout_ECX;
      if (iVar2 == 0) {
        puStack_20 = (undefined1 *)0x43f348;
        iVar2 = FUN_0043e8ec(param_2);
        uVar6 = extraout_ECX_00;
        if (iVar2 == 0) {
          return 1;
        }
      }
      puStack_20 = (undefined1 *)0x43f361;
      piVar4 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',uVar6);
      puStack_24 = &LAB_0043f3e4;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x43f37c;
      puStack_20 = &stack0xfffffffc;
      FUN_0043f848(param_1,(int)piVar4);
      puStack_2c = (undefined1 *)0x43f388;
      piVar5 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',extraout_ECX_01);
      puStack_30 = &LAB_0043f3c7;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      FUN_0043f848(param_2,(int)piVar5);
      FUN_0043f2c8(piVar4,piVar5);
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0043f3ce;
      puStack_30 = (undefined1 *)0x43f3c6;
      uVar1 = FUN_00403094(piVar5);
      return uVar1;
    }
  }
  return 0;
}

