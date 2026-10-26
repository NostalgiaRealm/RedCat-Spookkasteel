/*
 * FUN_004b4034 at 004b4034
 * undefined __register FUN_004b4034(int * param_1, int param_2)
 * Address ranges: 004b4034-004b41f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b4034(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  char *pcStack_164;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  int local_14c;
  int local_148;
  int local_144;
  byte local_140 [256];
  int local_40;
  int local_3c;
  byte local_38 [28];
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_150 = &stack0xfffffffc;
  local_144 = 0;
  local_148 = 0;
  local_14c = 0;
  local_3c = 0;
  local_40 = 0;
  local_14 = 0;
  puStack_154 = &LAB_004b41f6;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    FUN_00402fe0(*param_1,local_140);
    FUN_00403fd4(&local_40,local_140);
    pcStack_164 = " Parameter cannot be nil";
    FUN_004040f0(&local_3c,3);
    FUN_00403d94(local_3c);
    puVar1 = puStack_150;
  }
  puStack_150 = puVar1;
  iVar3 = FUN_0048ec24(*(int *)(local_c + 0x18));
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_1c = uVar4 + 1;
    local_10 = 0;
    do {
      FUN_0048f02c(*(int **)(local_c + 0x18),local_10,(undefined4 *)local_38);
      local_15 = '\x02';
      if ((*(byte *)(local_c + 8) & 2) != 0) {
        local_15 = '\x01';
      }
      cVar2 = FUN_0048f780(*(int **)(local_c + 0x18),local_38);
      if (cVar2 != (char)local_8[0xe]) {
        uVar5 = FUN_00496e80(CONCAT31(extraout_var,local_15));
        local_15 = (char)uVar5;
      }
      FUN_004b2a7c(local_15,&local_14);
      FUN_004b3b04((int)local_8,(undefined4 *)local_38,&local_148);
      puVar8 = &DAT_004b4278;
      iVar9 = local_148;
      FUN_0049145c((int *)local_8[7],local_38,&local_14c);
      iVar6 = local_14;
      iVar7 = local_14c;
      FUN_004040f0(&local_144,4);
      iVar3 = *(int *)local_8[0x14];
      (**(code **)(iVar3 + 0x34))((int *)local_8[0x14],local_144,iVar3,iVar6,iVar7,puVar8,iVar9);
      if ((char)local_8[9] != '\0') {
        cVar2 = FUN_0048ef44((int *)local_8[10],local_38);
        if (cVar2 == '\0') {
          (**(code **)(*(int *)local_8[10] + 0xc))((int *)local_8[10],local_38);
        }
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *in_FS_OFFSET = pcStack_164;
  FUN_00403dd4(&local_14c,3);
  FUN_00403dd4(&local_40,2);
  FUN_00403db0(&local_14);
  return;
}

