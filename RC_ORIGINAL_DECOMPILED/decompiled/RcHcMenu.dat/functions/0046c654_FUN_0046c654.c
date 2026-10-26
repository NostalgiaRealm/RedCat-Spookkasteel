/*
 * FUN_0046c654 at 0046c654
 * undefined __register FUN_0046c654(int * param_1, int * param_2, char param_3)
 * Address ranges: 0046c654-0046c740;0046c764-0046c786
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046c654(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 local_14 [2];
  undefined *local_c;
  int *local_8;
  
  puStack_2c = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_c = (undefined *)0x0;
  puStack_30 = &LAB_0046c787;
  local_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  puStack_3c = &LAB_0046c741;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_8 = param_2;
  cVar1 = FUN_00469218(param_1,(int)local_14,0);
  if (cVar1 == '\0') {
    FUN_00403db0(local_8);
  }
  else {
    if ((param_3 == '\0') && (param_1[0x35] != 0)) {
      FUN_00403e48((int *)&local_c,param_1[0x35]);
    }
    else {
      FUN_00403e48((int *)&local_c,param_1[0x34]);
    }
    if (local_c == (undefined *)0x0) {
      if ((char)param_1[0x36] == '\0') {
        bVar2 = 0;
        uVar3 = 0;
      }
      else {
        if (param_3 == '\0') {
          bVar2 = 2;
        }
        else {
          bVar2 = 4;
        }
        uVar3 = (uint)(byte)*PTR_DAT_00572214;
      }
      uStack_48 = local_14[0];
      FUN_0040aa08(bVar2,uVar3,(int *)&local_18);
      FUN_00403e04(local_8,local_18);
    }
    else {
      uStack_48 = local_14[0];
      FUN_0040aae0(local_c,(int *)&local_1c);
      FUN_00403e04(local_8,local_1c);
    }
  }
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = puStack_3c;
  local_34 = &LAB_0046c78e;
  puStack_38 = (undefined1 *)0x46c77e;
  FUN_00403dd4((int *)&local_1c,2);
  puStack_38 = (undefined1 *)0x46c786;
  FUN_00403db0((int *)&local_c);
  return;
}

