/*
 * FUN_004155d4 at 004155d4
 * int __register FUN_004155d4(int param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 004155d4-00415639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004155d4(int param_1,int *param_2,undefined4 *param_3)

{
  int local_114;
  char local_110 [4];
  byte local_10c [256];
  
  FUN_0040400c(local_10c,param_3,0xff);
  local_114 = FUN_004032f4(*param_2,local_10c);
  local_110[0] = local_114 == 0;
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))
              (*(undefined4 *)(param_1 + 0x3c),param_1,param_3,local_110,&local_114);
  }
  if (local_110[0] != '\0') {
    FUN_00415400();
  }
  return local_114;
}

