/*
 * FUN_004ae3f8 at 004ae3f8
 * undefined __register FUN_004ae3f8(int * param_1)
 * Address ranges: 004ae3f8-004ae47b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ae3f8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_004aeb50((int)param_1,'\x04');
    return;
  }
  if (((char)param_1[0x60] != '\0') || (cVar1 = (**(code **)(*param_1 + 0xb8))(), cVar1 != '\0')) {
    FUN_004aeb50((int)param_1,'\x01');
    return;
  }
  if (*(char *)((int)param_1 + 0x181) != '\0') {
    FUN_004aeb50((int)param_1,'\x03');
    return;
  }
  uVar2 = FUN_004ade68(param_1);
  if ((char)uVar2 != '\0') {
    FUN_004aeb50((int)param_1,'\x02');
    return;
  }
  FUN_004aeb50((int)param_1,'\0');
  return;
}

