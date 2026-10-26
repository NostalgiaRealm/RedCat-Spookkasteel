/*
 * FUN_10002920 at 10002920
 * undefined FUN_10002920(void)
 * Address ranges: 10002920-10002981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002920(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_10014560(local_c);
  FUN_10014560(local_18);
  FUN_100143f0(param_2);
  FUN_100144b0();
  fVar2 = (float10)FUN_100143d0();
  *(float *)(param_2 + 0xc) = (float)fVar2;
  uVar1 = FUN_1000c190(param_2);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  return;
}

