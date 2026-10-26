/*
 * FUN_00451030 at 00451030
 * undefined FUN_00451030(void)
 * Address ranges: 00451030-00451107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00451030(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006260c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae390(local_2c,&DAT_00690818,*(undefined4 *)(param_1 + 0x28));
  local_4c = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x14);
  local_4 = 0;
  local_48 = *(int *)(iVar2 + 0x3c) + local_4c;
  local_44 = *(int *)(param_1 + 0x20);
  local_40 = *(int *)(iVar2 + 0x40) + local_44;
  puVar3 = (undefined4 *)FUN_00451110(local_1c,iVar2,*(undefined4 *)(param_1 + 0x28));
  local_3c = *puVar3;
  local_38 = puVar3[1];
  local_34 = puVar3[2];
  local_30 = puVar3[3];
  FUN_00454090(&local_3c,&local_4c);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_28 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_28 + -1);
  }
  ExceptionList = local_c;
  return;
}

