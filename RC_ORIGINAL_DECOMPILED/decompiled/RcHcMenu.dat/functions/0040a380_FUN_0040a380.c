/*
 * FUN_0040a380 at 0040a380
 * undefined4 __register FUN_0040a380(char * param_1)
 * Address ranges: 0040a380-0040a3a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040a380(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  iVar1 = FUN_0040a108(param_1);
  piVar2 = FUN_0040a360(iVar1 + 1U);
  uVar3 = FUN_0040a134(piVar2,(undefined4 *)param_1,iVar1 + 1U);
  return uVar3;
}

