/*
 * FUN_0046b61c at 0046b61c
 * undefined __register FUN_0046b61c(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0046b61c-0046b724
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463c40 slot 33 for TFloatField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463c40 slot 33 for
   TFloatField. Original bytes unchanged; names and types still inferred. */

void FUN_0046b61c(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_1c;
  undefined4 *local_18;
  double local_14;
  uint local_c;
  undefined *local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_8 = (undefined *)0x0;
  puStack_30 = &LAB_0046b725;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  cVar1 = FUN_00469218(param_1,(int)&local_14,CONCAT31((int3)((uint)param_3 >> 8),1));
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    if (((char)param_3 == '\0') && (param_1[0x35] != 0)) {
      FUN_00403e48((int *)&local_8,param_1[0x35]);
    }
    else {
      FUN_00403e48((int *)&local_8,param_1[0x34]);
    }
    if (local_8 == (undefined *)0x0) {
      if ((char)param_1[0x36] == '\0') {
        bVar2 = 0;
        local_c = 0;
      }
      else {
        if ((char)param_3 == '\0') {
          bVar2 = 2;
        }
        else {
          bVar2 = 4;
        }
        local_c = (uint)(byte)*PTR_DAT_00572214;
      }
      local_40 = SUB104((float10)local_14,0);
      FUN_0040a9d0(bVar2,param_1[0x37],local_c,(int *)&local_18);
      FUN_00403e04(param_2,local_18);
    }
    else {
      local_40 = SUB104((float10)local_14,0);
      FUN_0040aa40(local_8,(int *)&local_1c);
      FUN_00403e04(param_2,local_1c);
    }
  }
  *in_FS_OFFSET = local_40;
  FUN_00403dd4((int *)&local_1c,2);
  FUN_00403db0((int *)&local_8);
  return;
}

