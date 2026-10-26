/*
 * FUN_00419288 at 00419288
 * undefined __register FUN_00419288(int param_1, int * param_2)
 * Address ranges: 00419288-004192f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419288(int param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[8] != 0) {
    local_8 = *(undefined4 *)(param_2[8] + 0x18);
  }
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_004192fc,*(short *)(param_1 + 0x18) != (short)local_8,&LAB_0041905c,
             param_1,&LAB_00419034,param_1);
  (**(code **)(*param_2 + 4))
            (param_2,&DAT_0041930c,local_8._2_2_ != *(short *)(param_1 + 0x1a),&LAB_00419068,param_1
             ,&LAB_00419048,param_1);
  return;
}

