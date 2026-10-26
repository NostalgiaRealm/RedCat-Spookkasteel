/*
 * FUN_004814fc at 004814fc
 * undefined __register FUN_004814fc(int param_1, undefined * param_2, char * param_3, char param_4, char param_5, int * param_6)
 * Address ranges: 004814fc-00481607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004814fc(int param_1,undefined *param_2,char *param_3,char param_4,char param_5,
                 int *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined *local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_10 = (undefined *)0x0;
  local_14 = (undefined *)0x0;
  uStack_18 = 0;
  local_1c = (undefined *)0x0;
  local_20 = (undefined *)0x0;
  puStack_30 = &LAB_00481661;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x481532;
  local_c = param_2;
  local_8 = param_1;
  FUN_0047fcc0(param_6,(int *)&local_10);
  puStack_38 = (undefined1 *)0x481541;
  FUN_00413a08(param_6,"DEFAULT DRIVER",(int *)&local_14);
  if (local_14 == (undefined *)0x0) {
    puStack_38 = (undefined1 *)0x481553;
    iVar2 = FUN_00409758(param_3,"STANDARD");
    if (iVar2 == 0) {
      puStack_38 = (undefined1 *)0x481564;
      FUN_00403e48((int *)&local_14,0x4816a4);
    }
    else {
      puStack_38 = (undefined1 *)0x481570;
      FUN_00403e48((int *)&local_14,(int)param_3);
    }
  }
  puStack_38 = (undefined1 *)0x481578;
  FUN_00481830(local_8);
  puStack_3c = &LAB_00481625;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x48158e;
  puStack_38 = &stack0xfffffffc;
  uVar1 = FUN_00481f8c(local_8);
  puStack_48 = &LAB_00481608;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  uStack_18._3_1_ = uVar1;
  FUN_00480768(local_8,param_5);
  FUN_004041f4(local_10);
  FUN_0047faa8(local_14,(int *)&local_1c);
  FUN_004041f4(local_1c);
  FUN_0047faa8(local_c,(int *)&local_20);
  puVar3 = FUN_004041f4(local_20);
  uVar4 = thunk_FUN_00478d6b(puVar3,extraout_EDX,extraout_ECX);
  FUN_0047fe48(uVar4);
  *in_FS_OFFSET = 0;
  if (param_4 != '\0') {
    FUN_00481fe4(local_8,uStack_18._3_1_);
  }
  return;
}

