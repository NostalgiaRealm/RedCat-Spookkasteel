/*
 * FUN_00563df0 at 00563df0
 * undefined __register FUN_00563df0(int param_1, int * param_2)
 * Address ranges: 00563df0-00563e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00563df0(int param_1,int *param_2)

{
  BOOL BVar1;
  uint uVar2;
  int local_1008 [1024];
  
  local_1008[0] = param_1;
  BVar1 = mciGetErrorStringA(*(MCIERROR *)(param_1 + 0x2ec),(LPSTR)local_1008,0x1000);
  if (BVar1 == 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_0057240c,param_2);
  }
  else {
    uVar2 = FUN_0040a108((char *)local_1008);
    FUN_00403e98(param_2,local_1008,uVar2);
  }
  return;
}

