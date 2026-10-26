/*
 * FUN_00461818 at 00461818
 * undefined __register FUN_00461818(undefined * param_1, undefined4 * param_2, undefined1 param_3, int * param_4)
 * Address ranges: 00461818-004619dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00461818(undefined *param_1,undefined4 *param_2,undefined1 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar6;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  ppuVar6 = (undefined4 **)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffbc;
  local_c = 0;
  local_5 = param_3;
  FUN_00403e04(param_4,param_2);
  iVar2 = FUN_00404030((int)param_1);
  if (0 < iVar2) {
    local_18 = 1;
    local_1c = iVar2;
    do {
      uVar3 = FUN_00461138(param_1,local_18);
      if ((byte)((char)uVar3 - 1U) < 2) {
        local_14 = FUN_004615c4(param_1,local_18);
        local_10 = FUN_00404030(*param_4);
        local_10 = local_10 + 1;
        iVar5 = local_c + 1;
        iVar4 = FUN_00404030(*param_4);
        iVar2 = local_10;
        if (iVar5 <= iVar4) {
          local_20 = (iVar4 - iVar5) + 1;
          do {
            uVar3 = FUN_00461308(CONCAT31((int3)((uint)local_18 >> 8),param_1[local_18 + -1]));
            iVar2 = iVar5;
            if ((char)uVar3 == *(char *)(*param_4 + -1 + iVar5)) break;
            iVar5 = iVar5 + 1;
            local_20 = local_20 + -1;
            iVar2 = local_10;
          } while (local_20 != 0);
        }
        local_10 = iVar2;
        iVar2 = FUN_00404030(*param_4);
        if (iVar2 < local_10) {
          uVar3 = FUN_00461308(CONCAT31((int3)((uint)local_18 >> 8),param_1[local_18 + -1]));
          FUN_00403f58((int *)&local_24,uVar3);
          FUN_00404038(param_4,local_24);
        }
        ppuVar6 = &local_28;
        FUN_00461680(param_1,(undefined4 *)*param_4,local_c + 1,(int *)ppuVar6,local_5,
                     local_14 - (local_c + 1),local_10);
        FUN_00403e04(param_4,local_28);
        local_c = local_14;
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar2 = FUN_00404030((int)param_1);
  iVar2 = FUN_004615c4(param_1,iVar2);
  iVar4 = FUN_00404030(*param_4);
  if (iVar2 != iVar4) {
    iVar4 = FUN_00404030(*param_4);
    FUN_00461680(param_1,(undefined4 *)*param_4,local_c + 1,(int *)&local_2c,local_5,iVar2 - local_c
                 ,iVar4 + 1);
    FUN_00403e04(param_4,local_2c);
  }
  iVar2 = FUN_00404030(*param_4);
  if (0 < iVar2) {
    local_14 = 1;
    local_1c = iVar2;
    do {
      if ((*(char *)(*param_4 + -1 + local_14) == ' ') &&
         (bVar1 = FUN_00461658(param_1,local_14 + -1), !bVar1)) {
        iVar2 = FUN_00404200(param_4);
        *(undefined1 *)(iVar2 + -1 + local_14) = local_5;
      }
      local_14 = local_14 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *in_FS_OFFSET = ppuVar6;
  FUN_00403dd4((int *)&local_2c,3);
  return;
}

