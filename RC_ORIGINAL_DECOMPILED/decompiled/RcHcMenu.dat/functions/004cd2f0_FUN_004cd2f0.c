/*
 * FUN_004cd2f0 at 004cd2f0
 * undefined __register FUN_004cd2f0(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004cd2f0-004cd48f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cd2f0(int *param_1,int *param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  byte *local_5c;
  int local_58;
  int local_54;
  int local_50;
  byte *local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c;
  int local_38;
  undefined1 local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined4 *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_64 = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_44 = 0;
  local_48 = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = (byte *)0x0;
  local_4c = (byte *)0x0;
  puStack_68 = &LAB_004cd490;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if ((param_1 == (int *)0x0) || (puVar1 = &stack0xfffffffc, param_2 == (int *)0x0)) {
    FUN_00403d94("GetMessage_CannotDelete_ThereAreReferences:  Parameter cannot be nil");
    puVar1 = puStack_64;
  }
  puStack_64 = puVar1;
  cVar2 = (**(code **)(*local_8 + 0x2c))();
  if (cVar2 == '\0') {
    FUN_00406a48(&PTR_DAT_004cd2d0,local_10);
  }
  else if (cVar2 == '\x01') {
    FUN_00406a48(&PTR_DAT_004cd2d8,local_10);
  }
  else if (cVar2 == '\x02') {
    FUN_00406a48(&PTR_DAT_004cd2e0,local_10);
  }
  else if (cVar2 == '\x03') {
    FUN_00406a48(&PTR_DAT_004cd2e8,local_10);
  }
  else {
    FUN_00403d94("GetMessage_CannotDelete_ThereAreReferences:  Unhandled case-part");
  }
  piVar3 = &local_18;
  cVar2 = (**(code **)(*local_8 + 0x2c))();
  FUN_00460a70(cVar2,&local_44);
  local_40 = local_44;
  local_3c = 0xb;
  (**(code **)(*local_8 + 0x34))(local_8,&local_4c);
  FUN_00460d1c(local_4c,&local_48);
  local_38 = local_48;
  local_34 = 0xb;
  FUN_00493550(local_8,&local_50);
  local_30 = local_50;
  local_2c = 0xb;
  cVar2 = (**(code **)(*local_c + 0x2c))();
  FUN_00460c48(cVar2,&local_54);
  local_28 = local_54;
  local_24 = 0xb;
  (**(code **)(*local_c + 0x34))(local_c,&local_5c);
  FUN_00460d1c(local_5c,&local_58);
  local_20 = local_58;
  local_1c = 0xb;
  FUN_0040a894((byte *)*local_10,&local_40,4,piVar3);
  FUN_00458598(local_18,(int *)&local_14);
  FUN_00403e04(local_10,local_14);
  *in_FS_OFFSET = uStack_6c;
  puStack_64 = &LAB_004cd497;
  puStack_68 = (undefined1 *)0x4cd482;
  FUN_00403dd4((int *)&local_5c,7);
  puStack_68 = (undefined1 *)0x4cd48f;
  FUN_00403dd4(&local_18,2);
  return;
}

