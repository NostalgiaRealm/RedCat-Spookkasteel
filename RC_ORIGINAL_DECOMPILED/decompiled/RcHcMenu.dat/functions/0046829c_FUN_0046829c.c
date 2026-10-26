/*
 * FUN_0046829c at 0046829c
 * undefined __register FUN_0046829c(undefined4 * param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 0046829c-0046843d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046829c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  puStack_48 = &stack0xfffffffc;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_18 = 0;
  local_1c = (undefined4 *)0x0;
  puStack_4c = &LAB_0046843e;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_0041300c(param_2);
  if (-1 < iVar1 + -1) {
    local_14 = 0;
    local_20 = iVar1;
    do {
      piVar2 = (int *)FUN_00467ef4(local_c,local_14);
      FUN_0040407c(&local_18,local_8,(undefined4 *)piVar2[3]);
      (**(code **)(**(int **)(param_4 + -4) + 0x38))(*(int **)(param_4 + -4),local_18,piVar2);
      uVar3 = FUN_00467918((int)piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)((int)piVar2 + 0x21) == '\x1b') {
          iVar1 = FUN_004678e0(piVar2);
          piVar4 = (int *)FUN_00467ef4(iVar1,0);
          iVar1 = FUN_00467870((int)piVar2);
          if (-1 < iVar1 + -1) {
            local_10 = 0;
            do {
              local_30 = local_18;
              local_2c = 0xb;
              local_28 = local_10;
              local_24 = 0;
              FUN_0040a894((byte *)"%s[%d]",&local_30,1,(int *)&local_1c);
              (**(code **)(**(int **)(param_4 + -4) + 0x38))
                        (*(int **)(param_4 + -4),local_1c,piVar4);
              if (*(char *)((int)piVar4 + 0x21) == '\x1a') {
                iVar6 = param_4;
                iVar5 = FUN_004678e0(piVar4);
                FUN_0040407c((int *)&local_34,local_1c,(undefined4 *)&LAB_00468464);
                FUN_0046829c(local_34,iVar5,extraout_ECX,iVar6);
              }
              local_10 = local_10 + 1;
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
        }
        else if ((*(byte *)((int)piVar2 + 0x22) & 0x10) == 0) {
          FUN_004678e0(piVar2);
          iVar1 = piVar2[3];
          FUN_004040f0((int *)&local_38,3);
          FUN_0046829c(local_38,0x468464,extraout_ECX_01,iVar1);
        }
        else {
          iVar1 = param_4;
          iVar6 = FUN_004678e0(piVar2);
          FUN_0046829c((undefined4 *)0x0,iVar6,extraout_ECX_00,iVar1);
        }
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_00468445;
  puStack_4c = (undefined1 *)0x468430;
  FUN_00403dd4((int *)&local_38,2);
  puStack_4c = (undefined1 *)0x46843d;
  FUN_00403dd4((int *)&local_1c,2);
  return;
}

