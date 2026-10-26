/*
 * FUN_0046b1c8 at 0046b1c8
 * undefined __register FUN_0046b1c8(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0046b1c8-0046b2a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 33 for TLargeintField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463810 slot 33 for
   TLargeintField. Original bytes unchanged; names and types still inferred. */

void FUN_0046b1c8(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined4 *local_114;
  byte local_110 [256];
  undefined *local_10;
  int local_c;
  uint uStack_8;
  
  puStack_124 = &stack0xfffffffc;
  local_114 = (undefined4 *)0x0;
  local_10 = (undefined *)0x0;
  puStack_128 = &LAB_0046b2a1;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  cVar1 = FUN_0046b2b0(param_1,(int)&local_c,param_3);
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    if (((char)param_3 == '\0') && (param_1[0x35] != 0)) {
      FUN_00403e48((int *)&local_10,param_1[0x35]);
      uVar2 = extraout_ECX_00;
      uVar3 = extraout_EDX_00;
    }
    else {
      FUN_00403e48((int *)&local_10,param_1[0x34]);
      uVar2 = extraout_ECX;
      uVar3 = extraout_EDX;
    }
    if (local_10 == (undefined *)0x0) {
      local_138 = 0x46b243;
      FUN_00406058(local_110,uVar3,uVar2,local_c,uStack_8);
      FUN_00403fd4(param_2,local_110);
    }
    else {
      local_138 = SUB104((float10)CONCAT44(uStack_8,local_c),0);
      FUN_0040aa40(local_10,(int *)&local_114);
      FUN_00403e04(param_2,local_114);
    }
  }
  *in_FS_OFFSET = local_138;
  FUN_00403db0((int *)&local_114);
  FUN_00403db0((int *)&local_10);
  return;
}

