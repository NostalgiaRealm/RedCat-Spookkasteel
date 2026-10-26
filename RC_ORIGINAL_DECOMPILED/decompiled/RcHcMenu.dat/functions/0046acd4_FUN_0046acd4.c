/*
 * FUN_0046acd4 at 0046acd4
 * undefined __register FUN_0046acd4(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0046acd4-0046ada9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 33 for TIntegerField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46352c slot 33 for
   TIntegerField. Original bytes unchanged; names and types still inferred. */

void FUN_0046acd4(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 *local_110;
  byte local_10c [256];
  undefined *local_c;
  uint local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_110 = (undefined4 *)0x0;
  local_c = (undefined *)0x0;
  puStack_124 = &LAB_0046adaa;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  cVar1 = FUN_0046adb8(param_1,&local_8,param_3);
  if (cVar1 == '\0') {
    FUN_00403db0(param_2);
  }
  else {
    if (((char)param_3 == '\0') && (param_1[0x35] != 0)) {
      FUN_00403e48((int *)&local_c,param_1[0x35]);
    }
    else {
      FUN_00403e48((int *)&local_c,param_1[0x34]);
    }
    if (local_c == (undefined *)0x0) {
      FUN_00402d7c(local_8,(char *)local_10c);
      FUN_00403fd4(param_2,local_10c);
    }
    else {
      local_134 = SUB104((float10)(int)local_8,0);
      FUN_0040aa40(local_c,(int *)&local_110);
      FUN_00403e04(param_2,local_110);
    }
  }
  *in_FS_OFFSET = local_134;
  FUN_00403db0((int *)&local_110);
  FUN_00403db0((int *)&local_c);
  return;
}

