/*
 * FUN_10024b80 at 10024b80
 * undefined FUN_10024b80(void)
 * Address ranges: 10024b80-10024bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_10024b80(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10014310(param_1 * param_2 + 8);
  if (piVar1 == (int *)0x0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Actor_tkarray_c_1003c920,0x78,&DAT_10265ce0,0);
    return (int *)0x0;
  }
  piVar1[1] = param_1;
  *piVar1 = param_2;
  return piVar1;
}

