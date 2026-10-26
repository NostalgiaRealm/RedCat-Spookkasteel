/*
 * FUN_00409f34 at 00409f34
 * int __register FUN_00409f34(undefined * param_1, undefined * param_2)
 * Address ranges: 00409f34-00409f80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00409f34(undefined *param_1,undefined *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00404030((int)param_2);
  pcVar2 = FUN_004041f4(param_1);
  do {
    if (iVar1 < 1) {
      return iVar1;
    }
    if ((param_2[iVar1 + -1] != '\0') &&
       (pcVar3 = FUN_0040a2d8(pcVar2,param_2[iVar1 + -1]), pcVar3 != (char *)0x0)) {
      uVar4 = FUN_0040d830(param_2,iVar1);
      if ((char)uVar4 != '\x02') {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    }
    iVar1 = iVar1 + -1;
  } while( true );
}

