/*
 * FUN_00422f30 at 00422f30
 * int * __register FUN_00422f30(undefined4 param_1, undefined4 param_2, uint param_3)
 * Address ranges: 00422f30-0042300e;00423026-0042302f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00422f30(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  RECT *pRVar8;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  RECT local_1c;
  int *local_c;
  uint local_8;
  
  puStack_2c = (undefined1 *)0x422f4a;
  local_8 = param_3;
  local_c = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  puStack_30 = &LAB_0042300f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_c + 0x40))(local_c,8);
  (**(code **)(*local_c + 0x34))(local_c,8);
  piVar1 = (int *)FUN_00421490(local_c);
  FUN_0041c434((int *)piVar1[5],'\0');
  FUN_0041c318((int *)piVar1[5],param_2);
  uVar2 = (**(code **)(*local_c + 0x20))();
  pRVar8 = &local_1c;
  uVar3 = (**(code **)(*local_c + 0x2c))();
  FUN_00411624(0,0,uVar3,&pRVar8->left,uVar2);
  FUN_0041c9f8(piVar1,&local_1c);
  uVar7 = 0;
  do {
    uVar6 = 0;
    do {
      uVar4 = uVar7 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      uVar5 = uVar6 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 == uVar5) {
        FUN_0041cf00(piVar1,uVar6,uVar7,local_8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 9);
    uVar7 = uVar7 + 1;
  } while (uVar7 != 9);
  FUN_004211a8((int)local_c);
  *in_FS_OFFSET = uStack_34;
  return local_c;
}

