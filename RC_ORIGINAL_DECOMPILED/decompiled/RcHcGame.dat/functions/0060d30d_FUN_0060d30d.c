/*
 * FUN_0060d30d at 0060d30d
 * undefined FUN_0060d30d(void)
 * Address ranges: 0060d30d-0060d362
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060d30d(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x40U) == 0) {
    if ((param_1->_flag & 0x83U) != 0) {
      uVar2 = FUN_0060e601(param_1);
      __freebuf(param_1);
      iVar1 = FUN_0061ad82(param_1->_file);
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_0060b25d(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  param_1->_flag = 0;
  return uVar2;
}

