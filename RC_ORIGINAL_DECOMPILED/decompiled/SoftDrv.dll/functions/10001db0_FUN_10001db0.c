/*
 * FUN_10001db0 at 10001db0
 * undefined FUN_10001db0(void)
 * Address ranges: 10001db0-10001e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10001db0(char *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 < 0x12) {
    return false;
  }
  *(undefined4 *)param_1 = s_Software__Window__10021094._0_4_;
  *(undefined4 *)(param_1 + 4) = s_Software__Window__10021094._4_4_;
  *(undefined4 *)(param_1 + 8) = s_Software__Window__10021094._8_4_;
  *(undefined4 *)(param_1 + 0xc) = s_Software__Window__10021094._12_4_;
  *(undefined2 *)(param_1 + 0x10) = s_Software__Window__10021094._16_2_;
  iVar1 = FUN_10002990(param_3,0xffffffff,0xffffffff,0x10,0);
  return iVar1 != 0;
}

