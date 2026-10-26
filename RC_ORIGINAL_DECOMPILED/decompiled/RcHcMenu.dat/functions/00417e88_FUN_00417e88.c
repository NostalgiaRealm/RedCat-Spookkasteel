/*
 * FUN_00417e88 at 00417e88
 * undefined __register FUN_00417e88(int param_1, char param_2, int param_3)
 * Address ranges: 00417e88-00417ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417e88(int param_1,char param_2,int param_3)

{
  undefined4 extraout_ECX;
  undefined4 local_c;
  
  if (param_2 != '\0') {
    local_c._2_2_ = (undefined2)((uint)param_3 >> 0x10);
    local_c = CONCAT22(local_c._2_2_,CONCAT11(param_2,param_2)) | 0xf000;
    FUN_00417624(param_1,(undefined4 *)((int)&local_c + 1),1);
    if ((local_c & 2) != 0) {
      FUN_00417dac(param_1,param_3,extraout_ECX);
    }
  }
  return;
}

