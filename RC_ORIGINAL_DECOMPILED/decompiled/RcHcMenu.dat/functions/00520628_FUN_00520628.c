/*
 * FUN_00520628 at 00520628
 * undefined __register FUN_00520628(int * param_1)
 * Address ranges: 00520628-005207ca;005207d2-005207f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00520628(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  undefined1 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 *puStack_30;
  undefined1 *local_2c;
  undefined1 *puVar9;
  uint *local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = (undefined4 *)&stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  iVar5 = 5;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_14 = &LAB_005207f5;
  local_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_18;
  local_1c = 0x520650;
  local_8 = param_1;
  iVar5 = FUN_0051e1b8(param_1);
  if (*(int *)(iVar5 + 0x234) != 0) {
    local_1c = 0x520665;
    iVar5 = FUN_0051e1b8(local_8);
    local_1c = 0x52066d;
    FUN_00520c58(iVar5,&local_1c);
    uVar6 = local_1c == 0;
    if (!(bool)uVar6) {
      local_1c = 0x520683;
      local_c = FUN_005167c0((int *)&DAT_0051670c,'\x01',extraout_ECX);
      local_1c = 0x520693;
      FUN_00516860((int)local_c,(HKEY)0x80000001);
      local_1c = 0x52069b;
      iVar5 = FUN_0051e1b8(local_8);
      local_1c = *(int *)(iVar5 + 0x234);
      local_20 = (uint *)&DAT_00520808;
      local_24 = (uint *)0x5206ae;
      iVar5 = FUN_0051e1b8(local_8);
      local_24 = (uint *)0x5206b6;
      FUN_00520c58(iVar5,(int *)&local_20);
      local_24 = local_20;
      FUN_004040f0((int *)&local_10,3);
      local_2c = (undefined1 *)0x5206dc;
      FUN_00404238((int)local_10,1,1,(int *)&local_24);
      FUN_00404140(local_24,(uint *)&DAT_00520808);
      if (!(bool)uVar6) {
        FUN_0040407c((int *)&local_10,(undefined4 *)&DAT_00520808,local_10);
      }
      local_2c = &LAB_005207cb;
      puStack_30 = (undefined1 *)*in_FS_OFFSET;
      *in_FS_OFFSET = (int)&puStack_30;
      cVar1 = FUN_005168c4((int)local_c,(int)local_10,'\x01');
      if (cVar1 != '\0') {
        uVar2 = FUN_0051e160((int)local_8);
        FUN_00516b04((int)local_c,"ColumnCount",uVar2);
        iVar5 = FUN_0051e160((int)local_8);
        uVar3 = iVar5 - 1;
        if (SBORROW4(iVar5,1)) {
          uVar3 = thunk_FUN_00402874(uVar3);
        }
        if (-1 < (int)uVar3) {
          local_18 = uVar3 + 1;
          local_14 = (undefined1 *)0x0;
          do {
            pcVar7 = "\\Column";
            uVar2 = 0x520769;
            puVar8 = local_10;
            FUN_00409bd8(local_14,(int *)&local_2c);
            puStack_30 = local_2c;
            FUN_004040f0((int *)&stack0xffffffd8,3);
            cVar1 = FUN_005168c4((int)local_c,(int)puVar9,'\x01');
            if (cVar1 != '\0') {
              piVar4 = (int *)FUN_0051e184((int)local_8,local_14);
              (**(code **)(*piVar4 + 8))(piVar4,local_c,*piVar4,uVar2,pcVar7,puVar8);
              FUN_00516830((int)local_c);
            }
            local_14 = local_14 + 1;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
        FUN_00516830((int)local_c);
      }
      *in_FS_OFFSET = (int)puStack_30;
      local_2c = (undefined1 *)0x5207ca;
      FUN_00403094(local_c);
      return;
    }
  }
  *in_FS_OFFSET = local_18;
  local_10 = (undefined4 *)&LAB_005207fc;
  local_14 = (undefined1 *)0x5207ec;
  FUN_00403dd4((int *)&local_2c,5);
  local_14 = (undefined1 *)0x5207f4;
  FUN_00403db0((int *)&local_10);
  return;
}

