/*
 * FUN_00468c08 at 00468c08
 * undefined __register FUN_00468c08(int param_1, char param_2)
 * Address ranges: 00468c08-00468c26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468c08(int param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x36) == '\x02') && (param_2 != '\0')) {
    if (*(char *)(param_1 + 0x68) == '\0') {
      FUN_0046a0bc(param_1,'\x01');
    }
    else {
      FUN_004696d0(param_1);
    }
  }
  return;
}

