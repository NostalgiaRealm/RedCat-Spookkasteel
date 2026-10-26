/*
 * FUN_00502c08 at 00502c08
 * int __register FUN_00502c08(int * param_1)
 * Address ranges: 00502c08-00502c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00502c08(int *param_1)

{
  bool bVar1;
  int local_c;
  
  local_c = 0;
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    local_c = FUN_004321bc(param_1);
    local_c = local_c / param_1[0x80];
  }
  return local_c;
}

