/*
 * FUN_0053a398 at 0053a398
 * undefined __register FUN_0053a398(int * param_1)
 * Address ranges: 0053a398-0053a56d;0053a585-0053a5c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053a398(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *in_FS_OFFSET;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  byte local_14c [256];
  undefined4 *local_4c;
  int local_48;
  byte *local_44;
  undefined4 local_40;
  undefined1 local_3c;
  int local_38;
  byte local_34 [28];
  int local_18;
  int *local_14;
  uint local_10;
  char local_9;
  int *local_8;
  
  local_38 = 0;
  local_48 = 0;
  local_4c = (undefined4 *)0x0;
  local_44 = (byte *)0x0;
  local_14 = (int *)0x0;
  puVar11 = (undefined4 *)&LAB_0053a5c9;
  iVar10 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xfffffe9c;
  local_9 = '\0';
  local_8 = param_1;
  do {
    iVar2 = FUN_00538e94(local_8);
    uVar3 = FUN_0051e5f0(iVar2);
    uVar4 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_18 = uVar4 + 1;
      local_10 = 0;
      do {
        piVar5 = (int *)FUN_00538e94(local_8);
        iVar2 = FUN_005375c0(piVar5,local_10);
        if (*(int *)(iVar2 + 0x68) != 0) {
          piVar5 = (int *)FUN_00538e94(local_8);
          iVar2 = FUN_005375c0(piVar5,local_10);
          piVar5 = *(int **)(iVar2 + 0x68);
          piVar6 = FUN_00406aa0((int *)&local_14);
          cVar1 = FUN_00403128(piVar5,(int *)&DAT_0053a5d8,piVar6);
          if (cVar1 != '\0') {
            piVar5 = (int *)&LAB_0053a56e;
            iVar2 = *in_FS_OFFSET;
            *in_FS_OFFSET = (int)&stack0xfffffe90;
            if (local_9 == '\0') {
              (**(code **)(*local_14 + 0x74))();
            }
            else if (local_9 == '\x01') {
              puVar9 = (undefined4 *)&stack0xfffffffc;
              piVar6 = (int *)(**(code **)(*local_14 + 0x6c))();
              cVar1 = (**(code **)(*piVar6 + 8))();
              if ((cVar1 == '\0') && (iVar7 = (**(code **)(*local_14 + 0x3c))(), iVar7 != 0)) {
                piVar6 = (int *)(**(code **)(*local_14 + 0x3c))();
                cVar1 = (**(code **)(*piVar6 + 0x4c))();
                if (cVar1 == '\0') {
                  piVar6 = (int *)(**(code **)(*local_14 + 0x3c))();
                  FUN_00495f2c(piVar6,local_34);
                  piVar6 = (int *)FUN_00538b6c(local_8);
                  cVar1 = FUN_004952a4(piVar6,local_34);
                  if (cVar1 == '\0') {
                    piVar6 = &local_38;
                    iVar2 = (**(code **)(*local_14 + 0x3c))();
                    iVar2 = FUN_00496d84(iVar2);
                    local_40 = *(undefined4 *)(iVar2 + 0x24);
                    local_3c = 0xb;
                    FUN_00406a48((undefined4 *)PTR_LAB_005723d0,(int *)&local_44);
                    FUN_0040a894(local_44,&local_40,0,piVar6);
                    iVar2 = (**(code **)(*local_14 + 0x3c))();
                    FUN_004b632c(iVar2,&local_48);
                    FUN_00538b6c(local_8);
                    iVar2 = (**(code **)(*local_14 + 0x3c))();
                    FUN_00402fe0(*local_8,local_14c);
                    FUN_00403fd4((int *)&local_4c,local_14c);
                    uVar8 = FUN_004905f8((int *)&PTR_FUN_0048e734,'\x01',local_4c,iVar2,piVar5,
                                         puVar9,iVar10,puVar11);
                    FUN_0040382c(uVar8);
                  }
                }
              }
            }
            *in_FS_OFFSET = iVar2;
          }
        }
        local_10 = local_10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    local_9 = local_9 + '\x01';
  } while (local_9 != '\x02');
  *in_FS_OFFSET = iVar10;
  FUN_00403dd4((int *)&local_4c,3);
  FUN_00403db0(&local_38);
  FUN_00406aa0((int *)&local_14);
  return;
}

