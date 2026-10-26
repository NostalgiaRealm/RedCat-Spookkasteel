/*
 * FUN_004cd880 at 004cd880
 * undefined __register FUN_004cd880(int * param_1, int * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004cd880-004cdb89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cd880(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int *in_FS_OFFSET;
  int local_8c;
  int local_88;
  byte *local_84;
  int local_80;
  int local_7c;
  int local_78;
  byte *local_74;
  int local_70;
  int local_6c;
  undefined4 *local_68;
  int local_64;
  byte *local_60;
  int local_5c;
  int local_58;
  int local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40;
  int local_3c;
  undefined1 local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  int *piVar3;
  undefined4 **ppuVar4;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 *local_14;
  char local_d;
  int *local_c;
  int *local_8;
  
  local_1c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x10;
  do {
    local_14 = (undefined4 *)((int)local_14 + -1);
  } while (local_14 != (undefined4 *)0x0);
  LOCK();
  UNLOCK();
  local_d = '\0';
  local_20 = &LAB_004cdb8a;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_c = param_2;
  local_8 = param_1;
  if ((param_1 == (int *)0x0) || (puVar1 = &stack0xfffffffc, param_2 == (int *)0x0)) {
    FUN_00403d94("GetMessage_ConfirmContinueDelete:  Parameter cannot be nil");
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  if (local_d == '\0') {
    cVar2 = (**(code **)(*local_c + 0x2c))();
    if (cVar2 != '\x03') {
      cVar2 = (**(code **)(*local_8 + 0x2c))();
      if (cVar2 == '\0') {
        FUN_00406a48(&PTR_DAT_004cd840,param_4);
      }
      else if (cVar2 == '\x01') {
        FUN_00406a48(&PTR_DAT_004cd848,param_4);
      }
      else if (cVar2 == '\x02') {
        FUN_00406a48(&PTR_DAT_004cd850,param_4);
      }
      else if (cVar2 == '\x03') {
        FUN_00406a48(&PTR_DAT_004cd858,param_4);
      }
      else {
        FUN_00403d94("GetMessage_ConfirmContinueDelete:  Unhandled case-part");
      }
      ppuVar4 = &local_68;
      local_2c = (undefined1 *)0x4cda7b;
      cVar2 = (**(code **)(*local_8 + 0x2c))();
      local_2c = (undefined1 *)0x4cda83;
      FUN_00460a70(cVar2,&local_6c);
      local_44 = local_6c;
      local_40 = 0xb;
      local_2c = (undefined1 *)0x4cda98;
      (**(code **)(*local_8 + 0x34))(local_8,&local_74);
      local_2c = (undefined1 *)0x4cdaa3;
      FUN_00460d1c(local_74,&local_70);
      local_3c = local_70;
      local_38 = 0xb;
      local_2c = (undefined1 *)0x4cdab8;
      FUN_00493550(local_8,&local_78);
      local_34 = local_78;
      local_30 = CONCAT31(local_30._1_3_,0xb);
      local_2c = (undefined1 *)0x4cdaca;
      cVar2 = (**(code **)(*local_c + 0x2c))();
      local_2c = (undefined1 *)0x4cdad2;
      FUN_00460a70(cVar2,&local_7c);
      piVar3 = (int *)CONCAT31((int3)((uint)ppuVar4 >> 8),0xb);
      local_2c = (undefined1 *)0x4cdae7;
      (**(code **)(*local_c + 0x34))(local_c,&local_84);
      local_2c = (undefined1 *)0x4cdaf2;
      FUN_00460d1c(local_84,&local_80);
      local_24 = local_80;
      local_20 = (undefined1 *)CONCAT31(local_20._1_3_,0xb);
      local_2c = (undefined1 *)0x4cdb04;
      cVar2 = (**(code **)(*local_c + 0x2c))();
      local_2c = (undefined1 *)0x4cdb0f;
      FUN_00460b5c(cVar2,&local_88);
      local_1c = (undefined1 *)local_88;
      local_2c = (undefined1 *)0x4cdb2e;
      FUN_0040a894((byte *)*param_4,&local_44,5,piVar3);
      FUN_00403e04(param_4,local_68);
      goto LAB_004cdb39;
    }
  }
  cVar2 = (**(code **)(*local_8 + 0x2c))();
  if (cVar2 == '\0') {
    FUN_00406a48(&PTR_DAT_004cd860,param_4);
  }
  else if (cVar2 == '\x01') {
    FUN_00406a48(&PTR_DAT_004cd868,param_4);
  }
  else if (cVar2 == '\x02') {
    FUN_00406a48(&PTR_DAT_004cd870,param_4);
  }
  else if (cVar2 == '\x03') {
    FUN_00406a48(&PTR_DAT_004cd878,param_4);
  }
  else {
    FUN_00403d94("GetMessage_ConfirmContinueDelete:  Unhandled case-part");
  }
  ppuVar4 = &local_14;
  local_2c = (undefined1 *)0x4cd956;
  cVar2 = (**(code **)(*local_8 + 0x2c))();
  local_2c = (undefined1 *)0x4cd95e;
  FUN_00460a70(cVar2,&local_48);
  local_44 = local_48;
  local_40 = 0xb;
  local_2c = (undefined1 *)0x4cd973;
  (**(code **)(*local_8 + 0x34))(local_8,&local_50);
  local_2c = (undefined1 *)0x4cd97e;
  FUN_00460d1c(local_50,&local_4c);
  local_3c = local_4c;
  local_38 = 0xb;
  local_2c = (undefined1 *)0x4cd993;
  FUN_00493550(local_8,&local_54);
  local_34 = local_54;
  local_30 = CONCAT31(local_30._1_3_,0xb);
  local_2c = (undefined1 *)0x4cd9a7;
  FUN_00460a70('\x03',&local_58);
  piVar3 = (int *)CONCAT31((int3)((uint)ppuVar4 >> 8),0xb);
  local_2c = (undefined1 *)0x4cd9bc;
  (**(code **)(*local_c + 0x30))(local_c,&local_60);
  local_2c = (undefined1 *)0x4cd9c7;
  FUN_00460d1c(local_60,&local_5c);
  local_24 = local_5c;
  local_20 = (undefined1 *)CONCAT31(local_20._1_3_,0xb);
  local_2c = (undefined1 *)0x4cd9db;
  FUN_00460b5c('\x03',&local_64);
  local_1c = (undefined1 *)local_64;
  local_2c = (undefined1 *)0x4cd9f7;
  FUN_0040a894((byte *)*param_4,&local_44,5,piVar3);
  FUN_00403e04(param_4,local_14);
LAB_004cdb39:
  local_2c = &LAB_004cdc48;
  local_30 = 0x4cdb51;
  FUN_004cd7c0(local_8,&local_8c);
  local_30 = local_8c;
  local_34 = 0x4cdb64;
  FUN_004040f0(param_4,3);
  *in_FS_OFFSET = local_30;
  local_2c = (undefined1 *)0x4cdb81;
  FUN_00403dd4(&local_8c,0x12);
  local_2c = (undefined1 *)0x4cdb89;
  FUN_00403db0((int *)&local_14);
  return;
}

