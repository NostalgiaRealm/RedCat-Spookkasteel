/*
 * FUN_00460a70 at 00460a70
 * undefined __register FUN_00460a70(char param_1, int * param_2)
 * Address ranges: 00460a70-00460ae2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00460a70(char param_1,int *param_2)

{
  if (param_1 == '\0') {
    FUN_00406a48(&PTR_DAT_00460a50,param_2);
  }
  else if (param_1 == '\x01') {
    FUN_00406a48(&PTR_DAT_00460a58,param_2);
  }
  else if (param_1 == '\x02') {
    FUN_00406a48(&PTR_DAT_00460a60,param_2);
  }
  else if (param_1 == '\x03') {
    FUN_00406a48(&PTR_DAT_00460a68,param_2);
  }
  else {
    FUN_00403d94("GetDefiniteArticle Unhandled case-part");
  }
  return;
}

