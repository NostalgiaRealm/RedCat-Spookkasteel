/*
 * FUN_00451660 at 00451660
 * undefined FUN_00451660(void)
 * Address ranges: 00451660-00451810
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00451660(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 local_4c [4];
  int local_48;
  uint local_44;
  uint uStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae390(local_4c,&DAT_00690818,*(undefined4 *)(param_1 + 0x28));
  local_3c = *(int *)(param_1 + 0x18);
  uVar6 = 0;
  local_4 = 0;
  local_38 = *(int *)(*(int *)(param_1 + 0x14) + 0x3c) + local_3c;
  local_34 = *(int *)(param_1 + 0x20);
  local_30 = *(int *)(*(int *)(param_1 + 0x14) + 0x40) + local_34;
  if (local_44 != 0) {
    do {
      uVar2 = local_44;
      if (local_48 == 0) {
        pcVar4 = "";
      }
      else {
        if ((*(char *)(local_48 + -1) == '\0') || (*(char *)(local_48 + -1) == -1)) {
LAB_0045174b:
          if (local_48 != 0) {
            *(undefined1 *)(local_48 + -1) = 0xff;
          }
        }
        else {
          uVar3 = FUN_0040ce00();
          if (uVar3 < uVar2) {
            FUN_005fe5fb();
          }
          if (((local_48 != 0) && (cVar1 = *(char *)(local_48 + -1), cVar1 != '\0')) &&
             (cVar1 != -1)) {
            if (uVar2 == 0) {
              *(char *)(local_48 + -1) = cVar1 + -1;
              FUN_004040a0(0);
            }
            else {
LAB_0045173d:
              FUN_00401a60(uVar2);
            }
            goto LAB_0045174b;
          }
          if (uVar2 != 0) {
            if (uStack_40 < uVar2) goto LAB_0045173d;
            goto LAB_0045174b;
          }
          if (local_48 != 0) {
            FUN_00404190(0);
            goto LAB_0045174b;
          }
        }
        pcVar4 = (char *)(local_48 + uVar6);
      }
      puVar5 = (undefined4 *)FUN_00451820(local_1c,*(undefined4 *)(param_1 + 0x14),*pcVar4 + -0x30);
      uStack_2c = *puVar5;
      uStack_28 = puVar5[1];
      uStack_24 = puVar5[2];
      uStack_20 = puVar5[3];
      FUN_00454090(&uStack_2c,&local_3c);
      local_3c = local_3c + *(int *)(*(int *)(param_1 + 0x14) + 0x3c);
      local_38 = local_38 + *(int *)(*(int *)(param_1 + 0x14) + 0x3c);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_44);
  }
  if (local_48 != 0) {
    cVar1 = *(char *)(local_48 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_48 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_48 + -1);
  }
  ExceptionList = local_c;
  return;
}

