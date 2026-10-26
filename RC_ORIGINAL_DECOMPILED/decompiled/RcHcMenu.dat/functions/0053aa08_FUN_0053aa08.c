/*
 * FUN_0053aa08 at 0053aa08
 * undefined __register FUN_0053aa08(undefined4 param_1, int * param_2)
 * Address ranges: 0053aa08-0053aa78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053aa08(undefined4 param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_1;
  FUN_0045f830((int)param_2);
  FUN_0045f864((int)local_c);
  bVar1 = FUN_004940cc(local_c,&stack0xffffffd0);
  if (bVar1) {
    do {
      FUN_00494e38(local_c,&stack0xffffffd0,'\x01',&local_10,&local_14);
      FUN_004964d0(local_10,(undefined4 *)(local_14 + 8));
      cVar2 = FUN_004940f4(local_c,&stack0xffffffd0);
    } while (cVar2 != '\0');
  }
  FUN_0045f898(local_c);
  FUN_0045f938(local_c);
  return;
}

