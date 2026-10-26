/*
 * FUN_004034dc at 004034dc
 * int __register FUN_004034dc(int param_1, undefined4 param_2, char * param_3)
 * Address ranges: 004034dc-00403501
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004034dc(int param_1,undefined4 param_2,char *param_3)

{
  ULONG_PTR UStack_10;
  char *pcStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (1 < DAT_0056f008) {
    UStack_10 = 0x4034ed;
    pcStack_c = param_3;
    uStack_8 = param_2;
    iStack_4 = param_1;
    FUN_004034bc(param_1,param_2,param_3);
    RaiseException(0xeedfae1,0,1,&UStack_10);
    param_1 = iStack_4;
  }
  return param_1;
}

